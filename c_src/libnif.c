#include <stdlib.h>
#include <erl_nif.h>

static ERL_NIF_TERM test(ErlNifEnv *env, int argc, const ERL_NIF_TERM argv[])
{
	ERL_NIF_TERM atom_error = enif_make_atom(env, "error");
	return enif_make_tuple(env, 2, atom_error, enif_make_atom(env, "not_impelmented"));
}

static ErlNifFunc nif_funcs[] =
{
	{"test", 0, test}
};

ERL_NIF_INIT(Elixir.SwiftNifTest, nif_funcs, NULL, NULL, NULL, NULL)
