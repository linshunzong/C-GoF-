DIR=qt_$$QT_VERSION/$$TARGET/release
debug:DIR=qt_$$QT_VERSION/$$TARGET/debug

DESTDIR =  ../../../bin/CGOF/$$DIR

LIBS   +=-L$$DESTDIR
#库关联配置如下：
#LDLIBS  = -lmicroword  在这里填写填写关联的库
#LIBS   += $$LDLIBS
#关联的库拷贝到相应的运行目录下
