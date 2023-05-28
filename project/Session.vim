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
badd +21 src/Player.cpp
badd +1 term:///data/programowanie/oop-put-course/project//4450:/usr/bin/zsh
badd +21 include/Player.h
badd +4 src/Entity.cpp
badd +29 include/Entity.h
badd +10072 term:///data/programowanie/oop-put-course/project//4588:/usr/bin/zsh
badd +1 term:///data/programowanie/oop-put-course/project//6269:/usr/bin/zsh
badd +243 src/GameMap.cpp
badd +22 main.cpp
badd +45 include/GameMap.h
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
badd +26 term://~/Documents/C/oop-put-course/project//3883:/usr/bin/zsh
badd +58 term://~/.local/share/nvim/site/pack/packer/start/coq_nvim//7266:/usr/bin/python3
badd +9 include/GenerationParams.h
badd +2 term://~/Documents/C/oop-put-course/project//12796:/usr/bin/zsh
badd +591 term://~/Documents/C/oop-put-course/project//12982:/usr/bin/zsh
badd +72 term://~/Documents/C/oop-put-course/project//36518:/usr/bin/zsh
badd +72 term://~/Documents/C/oop-put-course/project//37094:/usr/bin/zsh
badd +64 term://~/Documents/C/oop-put-course/project//37445:/usr/bin/zsh
badd +16 include/Prey.h
badd +26 src/Prey.cpp
badd +26 term://~/Documents/C/oop-put-course/project//50119:/usr/bin/zsh
badd +0 term://~/Documents/C/oop-put-course/project//55268:/usr/bin/zsh
argglobal
%argdel
set stal=2
tabnew +setlocal\ bufhidden=wipe
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
exe 'vert 1resize ' . ((&columns * 158 + 158) / 316)
exe '2resize ' . ((&lines * 35 + 37) / 75)
exe 'vert 2resize ' . ((&columns * 157 + 158) / 316)
exe '3resize ' . ((&lines * 36 + 37) / 75)
exe 'vert 3resize ' . ((&columns * 157 + 158) / 316)
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
let s:l = 10 - ((9 * winheight(0) + 36) / 72)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 10
normal! 049|
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
let s:l = 1 - ((0 * winheight(0) + 17) / 35)
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
let s:l = 3 - ((2 * winheight(0) + 18) / 36)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 3
normal! 020|
wincmd w
exe 'vert 1resize ' . ((&columns * 158 + 158) / 316)
exe '2resize ' . ((&lines * 35 + 37) / 75)
exe 'vert 2resize ' . ((&columns * 157 + 158) / 316)
exe '3resize ' . ((&lines * 36 + 37) / 75)
exe 'vert 3resize ' . ((&columns * 157 + 158) / 316)
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
exe 'vert 1resize ' . ((&columns * 158 + 158) / 316)
exe '2resize ' . ((&lines * 38 + 37) / 75)
exe 'vert 2resize ' . ((&columns * 157 + 158) / 316)
exe '3resize ' . ((&lines * 33 + 37) / 75)
exe 'vert 3resize ' . ((&columns * 157 + 158) / 316)
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
normal! 023|
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
let s:l = 16 - ((15 * winheight(0) + 19) / 38)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 16
normal! 08|
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
let s:l = 12 - ((11 * winheight(0) + 16) / 33)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 12
normal! 05|
wincmd w
exe 'vert 1resize ' . ((&columns * 158 + 158) / 316)
exe '2resize ' . ((&lines * 38 + 37) / 75)
exe 'vert 2resize ' . ((&columns * 157 + 158) / 316)
exe '3resize ' . ((&lines * 33 + 37) / 75)
exe 'vert 3resize ' . ((&columns * 157 + 158) / 316)
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
exe 'vert 1resize ' . ((&columns * 158 + 158) / 316)
exe '2resize ' . ((&lines * 38 + 37) / 75)
exe 'vert 2resize ' . ((&columns * 157 + 158) / 316)
exe '3resize ' . ((&lines * 33 + 37) / 75)
exe 'vert 3resize ' . ((&columns * 157 + 158) / 316)
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
let s:l = 190 - ((9 * winheight(0) + 36) / 72)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 190
normal! 035|
wincmd w
argglobal
if bufexists(fnamemodify("main.cpp", ":p")) | buffer main.cpp | else | edit main.cpp | endif
if &buftype ==# 'terminal'
  silent file main.cpp
endif
balt include/GenerationParams.h
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
let s:l = 22 - ((21 * winheight(0) + 19) / 38)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 22
normal! 022|
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
let s:l = 28 - ((18 * winheight(0) + 16) / 33)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 28
normal! 041|
wincmd w
exe 'vert 1resize ' . ((&columns * 158 + 158) / 316)
exe '2resize ' . ((&lines * 38 + 37) / 75)
exe 'vert 2resize ' . ((&columns * 157 + 158) / 316)
exe '3resize ' . ((&lines * 33 + 37) / 75)
exe 'vert 3resize ' . ((&columns * 157 + 158) / 316)
tabnext
edit src/Player.cpp
let s:save_splitbelow = &splitbelow
let s:save_splitright = &splitright
set splitbelow splitright
wincmd _ | wincmd |
vsplit
1wincmd h
wincmd _ | wincmd |
split
1wincmd k
wincmd w
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
exe '1resize ' . ((&lines * 36 + 37) / 75)
exe 'vert 1resize ' . ((&columns * 158 + 158) / 316)
exe '2resize ' . ((&lines * 35 + 37) / 75)
exe 'vert 2resize ' . ((&columns * 158 + 158) / 316)
exe 'vert 3resize ' . ((&columns * 157 + 158) / 316)
argglobal
balt include/Prey.h
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
let s:l = 23 - ((3 * winheight(0) + 18) / 36)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 23
normal! 0
wincmd w
argglobal
if bufexists(fnamemodify("include/Prey.h", ":p")) | buffer include/Prey.h | else | edit include/Prey.h | endif
if &buftype ==# 'terminal'
  silent file include/Prey.h
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
let s:l = 7 - ((6 * winheight(0) + 17) / 35)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 7
normal! 020|
wincmd w
argglobal
if bufexists(fnamemodify("src/Prey.cpp", ":p")) | buffer src/Prey.cpp | else | edit src/Prey.cpp | endif
if &buftype ==# 'terminal'
  silent file src/Prey.cpp
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
let s:l = 26 - ((25 * winheight(0) + 36) / 72)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 26
normal! 036|
wincmd w
exe '1resize ' . ((&lines * 36 + 37) / 75)
exe 'vert 1resize ' . ((&columns * 158 + 158) / 316)
exe '2resize ' . ((&lines * 35 + 37) / 75)
exe 'vert 2resize ' . ((&columns * 158 + 158) / 316)
exe 'vert 3resize ' . ((&columns * 157 + 158) / 316)
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
exe 'vert 1resize ' . ((&columns * 158 + 158) / 316)
exe 'vert 2resize ' . ((&columns * 157 + 158) / 316)
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
let s:l = 20 - ((19 * winheight(0) + 36) / 72)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 20
normal! 02|
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
let s:l = 4 - ((3 * winheight(0) + 36) / 72)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 4
normal! 027|
wincmd w
exe 'vert 1resize ' . ((&columns * 158 + 158) / 316)
exe 'vert 2resize ' . ((&columns * 157 + 158) / 316)
tabnext
argglobal
if bufexists(fnamemodify("term://~/Documents/C/oop-put-course/project//55268:/usr/bin/zsh", ":p")) | buffer term://~/Documents/C/oop-put-course/project//55268:/usr/bin/zsh | else | edit term://~/Documents/C/oop-put-course/project//55268:/usr/bin/zsh | endif
if &buftype ==# 'terminal'
  silent file term://~/Documents/C/oop-put-course/project//55268:/usr/bin/zsh
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
let s:l = 36 - ((35 * winheight(0) + 36) / 72)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 36
normal! 047|
tabnext 6
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
