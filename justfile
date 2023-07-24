test:
    node_modules/.bin/tree-sitter generate &&\
    node_modules/.bin/tree-sitter test

watch:
    find {*.js,*.json,src/*,corpus/*} | entr -c just test

