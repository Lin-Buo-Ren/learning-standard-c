#!/usr/bin/env bash
set \
	-o errexit \
	-o nounset

declare \
	script_real_dir="$(
		dirname "$(
			realpath \
				"${BASH_SOURCE[0]}"
		)"
	)"
cd "${script_real_dir}"

../build.bash

gcc \
	-o the-default-quote-c-endquote-locale \
	../query-current-locale.o \
	the-default-quote-c-endquote-locale.c
