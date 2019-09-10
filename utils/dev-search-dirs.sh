#!/bin/bash

this_rel=$(dirname ${BASH_SOURCE[0]})
rel_root=$this_rel/..

notion_root=$(realpath $rel_root)

src_search_dirs() {
    prefix='-searchdir '
    ls -d \
       $notion_root/de \
       $notion_root/etc \
       $notion_root/ioncore \
       $notion_root/contrib/scripts \
       $notion_root/mod_* \
        | sed "s/^/$prefix/" | xargs
}

src_search_dirs
