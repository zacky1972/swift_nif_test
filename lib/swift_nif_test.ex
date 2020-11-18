defmodule SwiftNifTest do
  require Logger

  @on_load :load_nif

  def load_nif do
    nif_file = '#{:code.priv_dir(:swift_nif_test)}/libnif'

    case :erlang.load_nif(nif_file, 0) do
      :ok -> :ok
      {:error, {:reload, _}} -> :ok
      {:error, reason} -> Logger.warn("Failed to load NIF: #{inspect(reason)}")
    end
  end

  def test(), do: raise("NIF test/0 not implemented")
end
