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

gcc \
	-c \
	query-current-locale.c
