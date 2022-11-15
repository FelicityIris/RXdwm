# rtrxdwm - R. T. Redreovich's X dynamic window manager
# See LICENSE file for copyright and license details.

include config.mk

SRC = drw.c rtrxdwm.c util.c
OBJ = ${SRC:.c=.o}

all: options rtrxdwm

options:
	@echo rtrxdwm build options:
	@echo "CFLAGS   = ${CFLAGS}"
	@echo "LDFLAGS  = ${LDFLAGS}"
	@echo "CC       = ${CC}"

.c.o:
	${CC} -c ${CFLAGS} $<

${OBJ}: config.h config.mk mpdcontrol.c

config.h:
	cp config.def.h $@

rtrxdwm: ${OBJ}
	${CC} -o $@ ${OBJ} ${LDFLAGS}

clean:
	rm -f rtrxdwm ${OBJ} rtrxdwm-${VERSION}.tar.gz

dist: clean
	mkdir -p rtrxdwm-${VERSION}
	cp -R LICENSE Makefile README config.def.h config.mk\
		rtrxdwm.1 drw.h util.h ${SRC} rtrxdwm.png transient.c rtrxdwm-${VERSION}
	tar -cf rtrxdwm-${VERSION}.tar rtrxdwm-${VERSION}
	gzip rtrxdwm-${VERSION}.tar
	rm -rf rtrxdwm-${VERSION}

install: all
	mkdir -p ${DESTDIR}${PREFIX}/bin
	cp -f rtrxdwm ${DESTDIR}${PREFIX}/bin
	chmod 755 ${DESTDIR}${PREFIX}/bin/rtrxdwm
	mkdir -p ${DESTDIR}${MANPREFIX}/man1
	sed "s/VERSION/${VERSION}/g" < rtrxdwm.1 > ${DESTDIR}${MANPREFIX}/man1/rtrxdwm.1
	chmod 644 ${DESTDIR}${MANPREFIX}/man1/rtrxdwm.1

uninstall:
	rm -f ${DESTDIR}${PREFIX}/bin/rtrxdwm\
		${DESTDIR}${MANPREFIX}/man1/rtrxdwm.1

.PHONY: all options clean dist install uninstall
