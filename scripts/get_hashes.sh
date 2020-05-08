#!/bin/sh
res=""
mode=$1
if [ ${mode} = "issue" ]; then
    for number in $@; do
        x=$(git log --oneline --grep "Fixes #${number}" --grep "Closes #${number}" --grep "Relates to #${number}" --pretty=format:"%h" --reverse)
        res="${res}\n${x}"
    done
else 
    res=$2
fi
_BRANCHES="master dunfell zeus warrior"
if [ ! -z "${BRANCHES}" ]; then
    _BRANCHES=${BRANCHES}
fi
for b in ${_BRANCHES}; do
    git checkout ${b} 1> /dev/null
    git pull 1> /dev/null
    git cherry-pick $(echo ${res} | tr '\n' ' ')
done

git checkout staging