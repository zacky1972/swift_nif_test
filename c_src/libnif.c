#include <stdlib.h>
#include <erl_nif.h>
#include "caller.h"

static ERL_NIF_TERM test(ErlNifEnv *env, int argc, const ERL_NIF_TERM argv[])
{
	caller();
	ERL_NIF_TERM atom_ok = enif_make_atom(env, "ok");
	return enif_make_tuple(env, 2, atom_ok, enif_make_atom(env, "true"));
}

static ErlNifFunc nif_funcs[] =
{
	{"test", 0, test}
};

ERL_NIF_INIT(Elixir.SwiftNifTest, nif_funcs, NULL, NULL, NULL, NULL)
