QT -= gui

CONFIG += c++17 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

DEFINES += VERSION=2
DEFINES += _LANGUAGE_C

INCLUDEPATH += $$PWD/include
INCLUDEPATH += $$PWD/include/PR

INCLUDEPATH += $$PWD/src/include


SOURCES += \
        main.cpp \
        src/lib/boot.c

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

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
    include/ultrahost.h
