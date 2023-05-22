let SessionLoad = 1
let s:so_save = &g:so | let s:siso_save = &g:siso | setg so=0 siso=0 | setl so=-1 siso=-1
let v:this_session=expand("<sfile>:p")
silent only
silent tabonly
cd ~/Documents/C/oop-put-course/project
if expand('%') == '' && !&modified && line('$') <= 1 && getline(1) == ''
  let s:wipebuf = bufnr('%')
endif
let s:shortmess_save = &shortmess
if &shortmess =~ 'A'
  set shortmess=aoOA
else
  set shortmess=aoO
endif
badd +1 src/Player.cpp
badd +1 term:///data/programowanie/oop-put-course/project//4450:/usr/bin/zsh
badd +1 include/Player.h
badd +1 src/Entity.cpp
badd +1 include/Entity.h
badd +10072 term:///data/programowanie/oop-put-course/project//4588:/usr/bin/zsh
badd +1 term:///data/programowanie/oop-put-course/project//6269:/usr/bin/zsh
badd +77 src/GameMap.cpp
badd +21 main.cpp
badd +33 include/GameMap.h
badd +13 include/Position.h
badd +1 include/Wall.h
badd +40 src/Wall.cpp
badd +52 term://~/Documents/C/oop-put-course/project//98898:/usr/bin/zsh
badd +1 term://~/Documents/C/oop-put-course/project//98940:/usr/bin/zsh
badd +1 term
badd +20 term://~/Documents/C/oop-put-course/project//2670:/usr/bin/zsh
badd +16 term://~/.local/share/nvim/site/pack/packer/start/coq_nvim//2905:/usr/bin/python3
badd +54 term://~/.local/share/nvim/site/pack/packer/start/coq_nvim//3138:/usr/bin/python3
badd +20 term://~/Documents/C/oop-put-course/project//3416:/usr/bin/zsh
badd +1 term://~/Documents/C/oop-put-course/project//3883:/usr/bin/zsh
badd +58 term://~/.local/share/nvim/site/pack/packer/start/coq_nvim//7266:/usr/bin/python3
argglobal
%argdel
set stal=2
tabnew +setlocal\ bufhidden=wipe
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
exe 'vert 1resize ' . ((&columns * 118 + 118) / 236)
exe '2resize ' . ((&lines * 23 + 26) / 53)
exe 'vert 2resize ' . ((&columns * 117 + 118) / 236)
exe '3resize ' . ((&lines * 26 + 26) / 53)
exe 'vert 3resize ' . ((&columns * 117 + 118) / 236)
argglobal
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
let s:l = 12 - ((8 * winheight(0) + 25) / 50)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 12
normal! 029|
wincmd w
argglobal
if bufexists(fnamemodify("term://~/Documents/C/oop-put-course/project//98940:/usr/bin/zsh", ":p")) | buffer term://~/Documents/C/oop-put-course/project//98940:/usr/bin/zsh | else | edit term://~/Documents/C/oop-put-course/project//98940:/usr/bin/zsh | endif
if &buftype ==# 'terminal'
  silent file term://~/Documents/C/oop-put-course/project//98940:/usr/bin/zsh
endif
balt term:///data/programowanie/oop-put-course/project//4450:/usr/bin/zsh
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 11) / 23)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
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
let s:l = 12 - ((0 * winheight(0) + 13) / 26)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 12
normal! 010|
wincmd w
exe 'vert 1resize ' . ((&columns * 118 + 118) / 236)
exe '2resize ' . ((&lines * 23 + 26) / 53)
exe 'vert 2resize ' . ((&columns * 117 + 118) / 236)
exe '3resize ' . ((&lines * 26 + 26) / 53)
exe 'vert 3resize ' . ((&columns * 117 + 118) / 236)
tabnext
edit src/Entity.cpp
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
exe 'vert 1resize ' . ((&columns * 118 + 118) / 236)
exe '2resize ' . ((&lines * 25 + 26) / 53)
exe 'vert 2resize ' . ((&columns * 117 + 118) / 236)
exe '3resize ' . ((&lines * 24 + 26) / 53)
exe 'vert 3resize ' . ((&columns * 117 + 118) / 236)
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
let s:l = 13 - ((12 * winheight(0) + 25) / 50)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 13
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
let s:l = 18 - ((17 * winheight(0) + 12) / 25)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 18
normal! 023|
wincmd w
argglobal
if bufexists(fnamemodify("include/Position.h", ":p")) | buffer include/Position.h | else | edit include/Position.h | endif
if &buftype ==# 'terminal'
  silent file include/Position.h
endif
balt include/Entity.h
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
let s:l = 13 - ((0 * winheight(0) + 12) / 24)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 13
normal! 0
wincmd w
exe 'vert 1resize ' . ((&columns * 118 + 118) / 236)
exe '2resize ' . ((&lines * 25 + 26) / 53)
exe 'vert 2resize ' . ((&columns * 117 + 118) / 236)
exe '3resize ' . ((&lines * 24 + 26) / 53)
exe 'vert 3resize ' . ((&columns * 117 + 118) / 236)
tabnext
edit src/GameMap.cpp
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
exe 'vert 1resize ' . ((&columns * 118 + 118) / 236)
exe '2resize ' . ((&lines * 25 + 26) / 53)
exe 'vert 2resize ' . ((&columns * 117 + 118) / 236)
exe '3resize ' . ((&lines * 24 + 26) / 53)
exe 'vert 3resize ' . ((&columns * 117 + 118) / 236)
argglobal
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
let s:l = 75 - ((30 * winheight(0) + 25) / 50)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 75
normal! 05|
wincmd w
argglobal
if bufexists(fnamemodify("main.cpp", ":p")) | buffer main.cpp | else | edit main.cpp | endif
if &buftype ==# 'terminal'
  silent file main.cpp
endif
balt src/GameMap.cpp
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
let s:l = 20 - ((19 * winheight(0) + 12) / 25)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 20
normal! 016|
wincmd w
argglobal
if bufexists(fnamemodify("include/GameMap.h", ":p")) | buffer include/GameMap.h | else | edit include/GameMap.h | endif
if &buftype ==# 'terminal'
  silent file include/GameMap.h
endif
balt main.cpp
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
let s:l = 30 - ((18 * winheight(0) + 12) / 24)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 30
normal! 015|
wincmd w
exe 'vert 1resize ' . ((&columns * 118 + 118) / 236)
exe '2resize ' . ((&lines * 25 + 26) / 53)
exe 'vert 2resize ' . ((&columns * 117 + 118) / 236)
exe '3resize ' . ((&lines * 24 + 26) / 53)
exe 'vert 3resize ' . ((&columns * 117 + 118) / 236)
tabnext
edit include/Wall.h
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
exe 'vert 1resize ' . ((&columns * 118 + 118) / 236)
exe 'vert 2resize ' . ((&columns * 117 + 118) / 236)
argglobal
balt include/Position.h
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
let s:l = 1 - ((0 * winheight(0) + 25) / 50)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists(fnamemodify("src/Wall.cpp", ":p")) | buffer src/Wall.cpp | else | edit src/Wall.cpp | endif
if &buftype ==# 'terminal'
  silent file src/Wall.cpp
endif
balt include/Wall.h
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
let s:l = 4 - ((0 * winheight(0) + 25) / 50)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 4
normal! 027|
wincmd w
exe 'vert 1resize ' . ((&columns * 118 + 118) / 236)
exe 'vert 2resize ' . ((&columns * 117 + 118) / 236)
tabnext
argglobal
if bufexists(fnamemodify("term://~/Documents/C/oop-put-course/project//3883:/usr/bin/zsh", ":p")) | buffer term://~/Documents/C/oop-put-course/project//3883:/usr/bin/zsh | else | edit term://~/Documents/C/oop-put-course/project//3883:/usr/bin/zsh | endif
if &buftype ==# 'terminal'
  silent file term://~/Documents/C/oop-put-course/project//3883:/usr/bin/zsh
endif
balt include/Wall.h
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 37 - ((36 * winheight(0) + 25) / 50)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 37
normal! 0
tabnext 3
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
nohlsearch
doautoall SessionLoadPost
unlet SessionLoad
" vim: set ft=vim :
