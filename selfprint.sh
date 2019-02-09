#!/bin/bash
p=\';x='y=x=$p$x$p\;$x\;echo\ -ne\ ${p}p=\\\\\\047\;$p\;echo\ \$y';y=x=$p$x$p\;$x\;echo\ -ne\ ${p}p=\\\\\\047\;$p\;echo\ \$y;echo -ne 'p=\\\047;';echo $y 