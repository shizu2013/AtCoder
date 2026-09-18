#!/bin/bash

COMMIT_MESSAGE=$1

if [ -z "$COMMIT_MESSAGE" ]; then
    echo "error: noCommitMessage"
    exit 1
fi

echo "==> Wait Commit"
git add .
git commit -m "$COMMIT_MESSAGE"
git push
echo "==> Correct Commit & Push"

