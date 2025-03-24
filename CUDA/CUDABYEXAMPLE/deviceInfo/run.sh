#!/bin/bash
#SBATCH -N 1
#SBATCH -n 16
#SBATCH --mem=2g
#SBATCH -J "Example Job"
#SBATCH -p academic
#SBATCH -t 12:00:00
#SBATCH --gres=gpu:1
#SBATCH --output jobOut-%j.out
module load cudnn8.9-cuda12.2/8.9.7.29
nvcc deviceInfo.cu -o deviceInfo
./deviceInfo
