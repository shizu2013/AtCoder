#!/bin/bash

COMMIT_MESSAGE=$1
CURRENT_DIR=$(pwd)
if [ -z "$COMMIT_MESSAGE" ]; then
    echo "error: noCommitMessage"
    exit 1
fi

echo "==> Wait Commit"
cd /Volumes/SSD/AtCoder/
git add .;
git commit -m "$COMMIT_MESSAGE"
git push
echo "==> Correct Commit & Push"
cd $"CARRENT_DIR"

