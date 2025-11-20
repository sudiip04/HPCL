#!/bin/bash
#SBATCH --job-name=mpi_hello
#SBATCH --output=mpi_hello.out
#SBATCH --error=mpi_hello.err
#SBATCH --ntasks=4
#SBATCH --time=00:05:00
#SBATCH --partition=standard

module load mpi/openmpi-x86_64

mpirun ./mpi_hello

