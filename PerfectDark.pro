QT -= gui

CONFIG += c++17 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

DEFINES += VERSION=2
DEFINES += _LANGUAGE_C
DEFINES += PAL=0
DEFINES += AVOID_UB

INCLUDEPATH += $$PWD/include
INCLUDEPATH += $$PWD/include/PR

INCLUDEPATH += $$PWD/src/include


SOURCES += \
        cmain.cpp \
        src/game/file.c \
        src/game/game_1a78b0.c \
        src/game/smoke.c \
        src/game/smokeinit.c \
        src/inflate/inflate.c \
        src/lib/args.c \
        src/lib/audiomgr.c \
        src/lib/boot.c \
        src/lib/dma.c \
        src/lib/fault.c \
        src/lib/joy.c \
        src/lib/main.c \
        src/lib/mema.c \
        src/lib/memp.c \
        src/lib/pimgr.c \
        src/lib/rdp.c \
        src/lib/rmon.c \
        src/lib/rzip.c \
        src/lib/sched.c \
        src/lib/segments.c \
        src/lib/tlb.c \
        src/lib/ultra/gu/scale.c \
        src/lib/ultra/os/createmesgqueue.c \
        src/lib/ultra/os/createthread.c \
        src/lib/ultra/os/initialize.c \
        src/lib/ultra/os/os_cache.c \
        src/lib/ultra/os/os_fpccsr.c \
        src/lib/ultra/os/recvmesg.c \
        src/lib/ultra/os/setthreadpri.c \
        src/lib/ultra/os/settimer.c \
        src/lib/ultra/os/startthread.c \
        src/lib/ultra/os/stopthread.c \
        src/lib/varsinit.c \
        src/lib/vi.c \
        src/lib/videbug.c \
        src/lib/vm.c



HEADERS += \
    include/PR/PRimage.h \
    include/PR/R4300.h \
    include/PR/abi.h \
    include/PR/gbi.h \
    include/PR/gbiex.h \
    include/PR/gs2dex.h \
    include/PR/gt.h \
    include/PR/gu.h \
    include/PR/leo.h \
    include/PR/leoappli.h \
    include/PR/libaudio.h \
    include/PR/mbi.h \
    include/PR/n_libaudio.h \
    include/PR/n_libaudio_s_to_n.h \
    include/PR/os.h \
    include/PR/os_ai.h \
    include/PR/os_cache.h \
    include/PR/os_cont.h \
    include/PR/os_convert.h \
    include/PR/os_debug.h \
    include/PR/os_eeprom.h \
    include/PR/os_error.h \
    include/PR/os_exception.h \
    include/PR/os_gbpak.h \
    include/PR/os_gio.h \
    include/PR/os_host.h \
    include/PR/os_internal.h \
    include/PR/os_internal_debug.h \
    include/PR/os_internal_error.h \
    include/PR/os_internal_exception.h \
    include/PR/os_internal_gio.h \
    include/PR/os_internal_host.h \
    include/PR/os_internal_reg.h \
    include/PR/os_internal_rsp.h \
    include/PR/os_internal_si.h \
    include/PR/os_internal_thread.h \
    include/PR/os_internal_tlb.h \
    include/PR/os_libc.h \
    include/PR/os_message.h \
    include/PR/os_motor.h \
    include/PR/os_pfs.h \
    include/PR/os_pi.h \
    include/PR/os_rdp.h \
    include/PR/os_reg.h \
    include/PR/os_rsp.h \
    include/PR/os_si.h \
    include/PR/os_system.h \
    include/PR/os_thread.h \
    include/PR/os_time.h \
    include/PR/os_tlb.h \
    include/PR/os_version.h \
    include/PR/os_vi.h \
    include/PR/os_voice.h \
    include/PR/ramrom.h \
    include/PR/rcp.h \
    include/PR/rdb.h \
    include/PR/region.h \
    include/PR/rmon.h \
    include/PR/sched.h \
    include/PR/sp.h \
    include/PR/sptask.h \
    include/PR/ucode.h \
    include/PR/ucode_debug.h \
    include/PR/ultraerror.h \
    include/PR/ultralog.h \
    include/PR/ultratypes.h \
    include/PR/uportals.h \
    include/sys/asm.h \
    include/sys/regdef.h \
    include/sys/u64driver.h \
    include/sys/u64gio.h \
    include/tinymon.h \
    include/ultra64.h \
    include/ultrahost.h \
    src/include/asm_helper.h \
    src/include/bss.h \
    src/include/commands.h \
    src/include/constants.h \
    src/include/data.h \
    src/include/files.h \
    src/include/firingrange/frcommands.h \
    src/include/game/acosasin.h \
    src/include/game/acosfasinf.h \
    src/include/game/activemenu.h \
    src/include/game/atan2f.h \
    src/include/game/bg.h \
    src/include/game/body.h \
    src/include/game/bondbike.h \
    src/include/game/bondcutscene.h \
    src/include/game/bondeyespy.h \
    src/include/game/bondgrab.h \
    src/include/game/bondgun.h \
    src/include/game/bondguninit.h \
    src/include/game/bondhead.h \
    src/include/game/bondmove.h \
    src/include/game/bondview.h \
    src/include/game/bondwalk.h \
    src/include/game/bossfile.h \
    src/include/game/bot.h \
    src/include/game/botact.h \
    src/include/game/botcmd.h \
    src/include/game/botinv.h \
    src/include/game/botinvinit.h \
    src/include/game/botmgr.h \
    src/include/game/camdraw.h \
    src/include/game/camera.h \
    src/include/game/casing.h \
    src/include/game/ceil.h \
    src/include/game/challenge.h \
    src/include/game/cheats.h \
    src/include/game/chr.h \
    src/include/game/chraction.h \
    src/include/game/chrai.h \
    src/include/game/chraicommands.h \
    src/include/game/chrmgr.h \
    src/include/game/crc.h \
    src/include/game/credits.h \
    src/include/game/debug.h \
    src/include/game/dlights.h \
    src/include/game/dyntex.h \
    src/include/game/endscreen.h \
    src/include/game/env.h \
    src/include/game/explosions.h \
    src/include/game/file.h \
    src/include/game/filelist.h \
    src/include/game/filemgr.h \
    src/include/game/floor.h \
    src/include/game/fmb.h \
    src/include/game/footstep.h \
    src/include/game/game_006900.h \
    src/include/game/game_00b320.h \
    src/include/game/game_00b820.h \
    src/include/game/game_0147d0.h \
    src/include/game/game_096360.h \
    src/include/game/game_096700.h \
    src/include/game/game_096b20.h \
    src/include/game/game_097a50.h \
    src/include/game/game_097aa0.h \
    src/include/game/game_0b0fd0.h \
    src/include/game/game_0b2150.h \
    src/include/game/game_13c510.h \
    src/include/game/game_152fa0.h \
    src/include/game/game_1531a0.h \
    src/include/game/game_175f90.h \
    src/include/game/game_176080.h \
    src/include/game/game_1a78b0.h \
    src/include/game/gamefile.h \
    src/include/game/getitle.h \
    src/include/game/gfxmemory.h \
    src/include/game/gfxreplace.h \
    src/include/game/gunfx.h \
    src/include/game/healthbar.h \
    src/include/game/hudmsg.h \
    src/include/game/inv.h \
    src/include/game/lang.h \
    src/include/game/lv.h \
    src/include/game/mainmenu.h \
    src/include/game/menu.h \
    src/include/game/menugfx.h \
    src/include/game/menuitem.h \
    src/include/game/modeldef.h \
    src/include/game/modelmgr.h \
    src/include/game/mplayer/ingame.h \
    src/include/game/mplayer/mplayer.h \
    src/include/game/mplayer/scenarios.h \
    src/include/game/mplayer/setup.h \
    src/include/game/mpstats.h \
    src/include/game/mtxf2lbulk.h \
    src/include/game/music.h \
    src/include/game/nbomb.h \
    src/include/game/objectives.h \
    src/include/game/options.h \
    src/include/game/pad.h \
    src/include/game/padhalllv.h \
    src/include/game/pak.h \
    src/include/game/pdmode.h \
    src/include/game/player.h \
    src/include/game/playermgr.h \
    src/include/game/playerreset.h \
    src/include/game/portal.h \
    src/include/game/portalconv.h \
    src/include/game/prop.h \
    src/include/game/propobj.h \
    src/include/game/propobjstop.h \
    src/include/game/propsnd.h \
    src/include/game/quaternion.h \
    src/include/game/race.h \
    src/include/game/radar.h \
    src/include/game/rng2.h \
    src/include/game/room.h \
    src/include/game/savebuffer.h \
    src/include/game/setup.h \
    src/include/game/setuputils.h \
    src/include/game/shards.h \
    src/include/game/sight.h \
    src/include/game/sky.h \
    src/include/game/smoke.h \
    src/include/game/sparks.h \
    src/include/game/splat.h \
    src/include/game/stagemusic.h \
    src/include/game/stagetable.h \
    src/include/game/stars.h \
    src/include/game/stubs/game_000840.h \
    src/include/game/stubs/game_000850.h \
    src/include/game/stubs/game_000860.h \
    src/include/game/stubs/game_000870.h \
    src/include/game/stubs/game_0008e0.h \
    src/include/game/stubs/game_0008f0.h \
    src/include/game/stubs/game_000900.h \
    src/include/game/stubs/game_000910.h \
    src/include/game/stubs/game_00b180.h \
    src/include/game/stubs/game_00b200.h \
    src/include/game/stubs/game_013540.h \
    src/include/game/stubs/game_015260.h \
    src/include/game/stubs/game_015270.h \
    src/include/game/stubs/game_0153f0.h \
    src/include/game/stubs/game_015400.h \
    src/include/game/stubs/game_015410.h \
    src/include/game/stubs/game_102230.h \
    src/include/game/stubs/game_175f50.h \
    src/include/game/stubs/game_176000.h \
    src/include/game/tex.h \
    src/include/game/texdecompress.h \
    src/include/game/tiles.h \
    src/include/game/timing.h \
    src/include/game/title.h \
    src/include/game/training.h \
    src/include/game/trainingmenus.h \
    src/include/game/utils.h \
    src/include/game/vtxstore.h \
    src/include/game/wallhit.h \
    src/include/game/weather.h \
    src/include/gunscript.h \
    src/include/inflate/inflate.h \
    src/include/intro.h \
    src/include/lang.h \
    src/include/lib/ailist.h \
    src/include/lib/anim.h \
    src/include/lib/args.h \
    src/include/lib/audiodma.h \
    src/include/lib/audiomgr.h \
    src/include/lib/boot.h \
    src/include/lib/collision.h \
    src/include/lib/crash.h \
    src/include/lib/debughud.h \
    src/include/lib/dma.h \
    src/include/lib/fault.h \
    src/include/lib/joy.h \
    src/include/lib/lib_06440.h \
    src/include/lib/lib_17ce0.h \
    src/include/lib/lib_2f490.h \
    src/include/lib/lib_2fc60.h \
    src/include/lib/lib_317f0.h \
    src/include/lib/lib_34240.h \
    src/include/lib/lib_34d0.h \
    src/include/lib/lib_39c80.h \
    src/include/lib/lib_39fc0.h \
    src/include/lib/lib_3d280.h \
    src/include/lib/lib_3e3e0.h \
    src/include/lib/lib_3e8c0.h \
    src/include/lib/lib_48150.h \
    src/include/lib/libc/ll.h \
    src/include/lib/libc/llcvt.h \
    src/include/lib/libc/xprintf.h \
    src/include/lib/main.h \
    src/include/lib/mema.h \
    src/include/lib/memp.h \
    src/include/lib/model.h \
    src/include/lib/mp3.h \
    src/include/lib/mtx.h \
    src/include/lib/music.h \
    src/include/lib/path.h \
    src/include/lib/pimgr.h \
    src/include/lib/profile.h \
    src/include/lib/rdp.h \
    src/include/lib/reset.h \
    src/include/lib/rmon.h \
    src/include/lib/rng.h \
    src/include/lib/rzip.h \
    src/include/lib/sched.h \
    src/include/lib/segments.h \
    src/include/lib/snd.h \
    src/include/lib/speaker.h \
    src/include/lib/str.h \
    src/include/lib/tlb.h \
    src/include/lib/vars.h \
    src/include/lib/vi.h \
    src/include/lib/videbug.h \
    src/include/lib/vm.h \
    src/include/math.h \
    src/include/pads.h \
    src/include/props.h \
    src/include/sfx.h \
    src/include/sgidefs.h \
    src/include/stagesetup.h \
    src/include/stdarg.h \
    src/include/stdlib.h \
    src/include/textureconfig.h \
    src/include/tiles.h \
    src/include/tvcmds.h \
    src/include/types.h \
    src/include/util.h \
    src/include/versions.h

DISTFILES += \
    src/include/macros.inc



# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
