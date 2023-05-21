let SessionLoad = 1
let s:so_save = &g:so | let s:siso_save = &g:siso | setg so=0 siso=0 | setl so=-1 siso=-1
let v:this_session=expand("<sfile>:p")
silent only
silent tabonly
cd /data/programowanie/oop-put-course/project
if expand('%') == '' && !&modified && line('$') <= 1 && getline(1) == ''
  let s:wipebuf = bufnr('%')
endif
let s:shortmess_save = &shortmess
if &shortmess =~ 'A'
  set shortmess=aoOA
else
  set shortmess=aoO
endif
badd +82 src/Player.cpp
badd +0 term:///data/programowanie/oop-put-course/project//4450:/usr/bin/zsh
badd +0 include/Player.h
badd +1 src/Entity.cpp
badd +0 include/Entity.h
badd +10072 term:///data/programowanie/oop-put-course/project//4588:/usr/bin/zsh
badd +10064 term:///data/programowanie/oop-put-course/project//6269:/usr/bin/zsh
argglobal
%argdel
set stal=2
tabnew +setlocal\ bufhidden=wipe
tabnew +setlocal\ bufhidden=wipe
tabnew +setlocal\ bufhidden=wipe
tabrewind
edit src/Player.cpp
let s:save_splitbelow = &splitbelow
let s:save_splitright = &splitright
set splitbelow splitright
wincmd _ | wincmd |
vsplit
1wincmd h
wincmd w
wincmd _ | wincmd |
split
1wincmd k
wincmd w
let &splitbelow = s:save_splitbelow
let &splitright = s:save_splitright
wincmd t
let s:save_winminheight = &winminheight
let s:save_winminwidth = &winminwidth
set winminheight=0
set winheight=1
set winminwidth=0
set winwidth=1
exe 'vert 1resize ' . ((&columns * 105 + 105) / 211)
exe '2resize ' . ((&lines * 36 + 37) / 75)
exe 'vert 2resize ' . ((&columns * 105 + 105) / 211)
exe '3resize ' . ((&lines * 35 + 37) / 75)
exe 'vert 3resize ' . ((&columns * 105 + 105) / 211)
argglobal
balt src/Player.cpp
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let &fdl = &fdl
let s:l = 72 - ((70 * winheight(0) + 36) / 72)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 72
normal! 010|
wincmd w
argglobal
if bufexists(fnamemodify("term:///data/programowanie/oop-put-course/project//4450:/usr/bin/zsh", ":p")) | buffer term:///data/programowanie/oop-put-course/project//4450:/usr/bin/zsh | else | edit term:///data/programowanie/oop-put-course/project//4450:/usr/bin/zsh | endif
if &buftype ==# 'terminal'
  silent file term:///data/programowanie/oop-put-course/project//4450:/usr/bin/zsh
endif
balt src/Player.cpp
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 53 - ((35 * winheight(0) + 18) / 36)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 53
normal! 047|
wincmd w
argglobal
if bufexists(fnamemodify("include/Player.h", ":p")) | buffer include/Player.h | else | edit include/Player.h | endif
if &buftype ==# 'terminal'
  silent file include/Player.h
endif
balt src/Player.cpp
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let &fdl = &fdl
let s:l = 1 - ((0 * winheight(0) + 17) / 35)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
exe 'vert 1resize ' . ((&columns * 105 + 105) / 211)
exe '2resize ' . ((&lines * 36 + 37) / 75)
exe 'vert 2resize ' . ((&columns * 105 + 105) / 211)
exe '3resize ' . ((&lines * 35 + 37) / 75)
exe 'vert 3resize ' . ((&columns * 105 + 105) / 211)
tabnext
argglobal
enew
balt include/Player.h
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
tabnext
edit src/Entity.cpp
let s:save_splitbelow = &splitbelow
let s:save_splitright = &splitright
set splitbelow splitright
wincmd _ | wincmd |
vsplit
1wincmd h
wincmd w
let &splitbelow = s:save_splitbelow
let &splitright = s:save_splitright
wincmd t
let s:save_winminheight = &winminheight
let s:save_winminwidth = &winminwidth
set winminheight=0
set winheight=1
set winminwidth=0
set winwidth=1
exe 'vert 1resize ' . ((&columns * 105 + 105) / 211)
exe 'vert 2resize ' . ((&columns * 105 + 105) / 211)
argglobal
balt include/Player.h
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let &fdl = &fdl
let s:l = 1 - ((0 * winheight(0) + 36) / 72)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists(fnamemodify("include/Entity.h", ":p")) | buffer include/Entity.h | else | edit include/Entity.h | endif
if &buftype ==# 'terminal'
  silent file include/Entity.h
endif
balt src/Entity.cpp
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let &fdl = &fdl
let s:l = 1 - ((0 * winheight(0) + 36) / 72)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
exe 'vert 1resize ' . ((&columns * 105 + 105) / 211)
exe 'vert 2resize ' . ((&columns * 105 + 105) / 211)
tabnext
argglobal
if bufexists(fnamemodify("term:///data/programowanie/oop-put-course/project//6269:/usr/bin/zsh", ":p")) | buffer term:///data/programowanie/oop-put-course/project//6269:/usr/bin/zsh | else | edit term:///data/programowanie/oop-put-course/project//6269:/usr/bin/zsh | endif
if &buftype ==# 'terminal'
  silent file term:///data/programowanie/oop-put-course/project//6269:/usr/bin/zsh
endif
balt term:///data/programowanie/oop-put-course/project//4588:/usr/bin/zsh
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 9806 - ((42 * winheight(0) + 36) / 72)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 9806
normal! 091|
tabnext 2
set stal=1
if exists('s:wipebuf') && len(win_findbuf(s:wipebuf)) == 0 && getbufvar(s:wipebuf, '&buftype') isnot# 'terminal'
  silent exe 'bwipe ' . s:wipebuf
endif
unlet! s:wipebuf
set winheight=1 winwidth=20
let &shortmess = s:shortmess_save
let s:sx = expand("<sfile>:p:r")."x.vim"
if filereadable(s:sx)
  exe "source " . fnameescape(s:sx)
endif
let &g:so = s:so_save | let &g:siso = s:siso_save
set hlsearch
doautoall SessionLoadPost
unlet SessionLoad
" vim: set ft=vim :
