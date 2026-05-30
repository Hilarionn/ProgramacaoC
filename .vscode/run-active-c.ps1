param(
    [Parameter(Mandatory = $true)]
    [string]$SourceFile,

    [Parameter(Mandatory = $true)]
    [string]$WorkspaceFolder,

    [Parameter(Mandatory = $true)]
    [string]$OutputName
)

$binDir = Join-Path $WorkspaceFolder "bin"
$outputFile = Join-Path $binDir "$OutputName.exe"

if (-not (Test-Path -LiteralPath $binDir)) {
    New-Item -ItemType Directory -Path $binDir | Out-Null
}

Set-Location -LiteralPath $WorkspaceFolder

gcc $SourceFile -o $outputFile

if ($LASTEXITCODE -eq 0) {
    & $outputFile
}
