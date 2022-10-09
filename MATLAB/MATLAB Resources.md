# Awesome MATLAB  [![Awesome](https://cdn.rawgit.com/sindresorhus/awesome/d7305f38d29fed78fa85652e3a63e154dd8e8829/media/badge.svg)](https://github.com/sindresorhus/awesome)

A curated list of awesome MATLAB toolboxes, applications, software and resources.
Inspired by [awesome-R](https://github.com/qinwf/awesome-R).

- [Awesome MATLAB](#awesome-)
  - [3rd Party Commercial Toolboxes](#3rd-party-commercial-toolboxes)
  - [Artificial Intelligence and Machine Learning](#artificial-intelligence-and-machine-learning)
  - [Computational Mechanics](#computational-mechanics)
  - [Cool](#cool)
  - [Database Management](#database-management)
  - [Geospatial](#geospatial)
  - [Games](#games)
  - [Hardware](#hardware)
  - [High Performance Computing in MATLAB](#High-Performance-Computing-in-MATLAB)
  - [Image Processing and Computer Vision](#image-processing-and-computer-vision)
  - [Interfacing with other languages](#interfacing-with-other-languages)
  - [Interfacing with other programs](#interfacing-with-other-programs)
  - [Learning MATLAB](#learning-matlab)
  - [Model Reduction](#model-reduction)
  - [Making Figures](#making-figures)
  - [MATLAB-like environments](#matlab-like-environments)
  - [Miscellaneous Free Toolboxes](#miscellaneous-free-toolboxes)
  - [Optimization](#optimization)
  - [Statistics](#statistics)
- [Resources](#resources)
    - [Websites](#websites)
    - [Blogs](#blogs)
    - [Books](#books)
    - [Reference Cards](#reference-cards)
    - [Social Media](#social-media)
    - [MOOCs](#moocs)
    - [Tips and Tricks](#tips-and-tricks)
- [Contributing](#contributing)


## 3rd Party Commercial Toolboxes
*High quality commercial toolboxes from organisations other than MathWorks*

* [Multiprecision Toolbox for MATLAB](http://www.advanpix.com/) - This toolbox equips MATLAB with a new multiple precision floating-point numeric type and an extensive set of mathematical functions that are capable of computations with arbitrary precision.
* [MOSEK Optimization Tools](https://www.mosek.com) - The [MOSEK tools](https://mosek.com/resources/downloads) provide access to the powerful MOSEK optimization solvers from inside the MATLAB environment either by a classical [Toolobx](http://docs.mosek.com/7.1/tools/index.html) or by the modern object-oriented API [Fusion](http://docs.mosek.com/7.1/matlabfusion/index.html).
* [FEATool Multiphysics](http://www.precisesimulation.com) - Finite Element FEM Simulation toolbox for Matlab and Octave featuring an easy to use GUI, integrated CAD, geometry, grid generation, solvers, and postprocessing functionality.

## Artificial Intelligence and Machine Learning
* [MATLAB Deep Learning Model Hub](https://github.com/matlab-deep-learning/MATLAB-Deep-Learning-Model-Hub). Discover the latest pretrained models for deep learning in MATLAB

## Computational Mechanics
* [GIBBON](https://www.gibboncode.org/) - An open-source ([get the source here](https://github.com/gibbonCode/GIBBON)) MATLAB toolbox for computational (bio)mechanics, computational geometry, image segmentation, meshing, lattice structure creation, and finite element analysis (by linking with the open source package [FEBio](https://febio.org/) and the commercial package ABAQUS). 

## Cool
*Fun projects that make you say 'Cool!'*

 - [Engima](http://blogs.mathworks.com/pick/2015/10/30/enigma/) - MATLAB version of the Enigma machine.
 - [Invisibility Cloak Using MATLAB and Simulink](https://www.mathworks.com/matlabcentral/fileexchange/103830-invisibility-cloak-using-matlab-and-simulink) - This submission contains the implementation of an Invisibility Cloak using image thresholding and segmentation.

## Database Management
*Toolboxes for managing data*

* [Database toolbox](http://uk.mathworks.com/products/database/) - Official database toolbox from The MathWorks.
* [go-redis](https://github.com/markuman/go-redis/) - Free Redis Mex client for MATLAB.
* [mex-sqlite3](https://github.com/rmartinjak/mex-sqlite3) - Free Sqlite3 Mex client for MATLAB.
* [dotenv for MATLAB](https://github.com/mathworks/dotenv-for-MATLAB) - Manage database configuration environment variables.

## Games

*Fully playable games developed in MATLAB.*

* [2048](http://uk.mathworks.com/matlabcentral/fileexchange/46124-2048-matlab-edition) - 2048 is a game originally created by Gabriele Cirulli. This is a MATLAB implementation of the game.
* [Flappy bird](http://uk.mathworks.com/matlabcentral/fileexchange/45795-flappy-bird-for-matlab) - As one of the most popular games on app stores before being taken down, Flappy Bird does not need any further introduction. Now, it has come back alive, on MATLAB.

## Geospatial

* [TopoToolbox](https://topotoolbox.wordpress.com/) - TopoToolbox is a MATLAB program for the analysis of digital elevation models (DEMs). It's free and open source.

## Hardware

* [CPU Info](https://de.mathworks.com/matlabcentral/fileexchange/33155-cpu-info) - Read various bits of information about the CPU and operating system.
* [MATLAB Mobile](http://uk.mathworks.com/products/matlab-mobile/) - MATLAB on Android and iOS mobile phones and tablets.
* [Raspberry Pi Support from MATLAB](http://uk.mathworks.com/hardware-support/raspberry-pi-matlab.html) - Acquire sensor and image data from your connected Raspberry Pi.
* [Rasperry Pi IO Support for Octave](http://github.com/octave-de/octave-rpi-gpio) - Control Rasperry Pi GPIO Port from Octave.

## High Performance Computing in MATLAB

* [MATLAB on the NVIDIA GPU Cloud](https://ngc.nvidia.com/catalog/containers/partners:matlab) - Running MATLAB on the NVIDIA GPU Cloud.
* [Parallel Computing Toolbox](https://uk.mathworks.com/products/parallel-computing.html) - Mathworks Toolbox. Provides support for various parallel programming paradigms to scale MATLAB to 1000s of CPU cores and GPUs. Also helps make maximum use of your laptop if that's the only hardware you have.

## Image Processing and Computer Vision

* [Computer Vision System Toolbox](http://uk.mathworks.com/products/computer-vision/) - The official computer vision toolbox from MathWorks.
* [Image Processing Toolbox](http://uk.mathworks.com/products/image/) - The official Image Processing Toolbox from MathWorks.
* [MatConvNet](http://www.vlfeat.org/matconvnet/) - MatConvNet is a free MATLAB toolbox implementing Convolutional Neural Networks (CNNs) for computer vision applications. It is simple, efficient, and can run and learn state-of-the-art CNNs. It provides pre-trained CNNs for image classification, segmentation, face recognition, and text detection.
* [Piotr's Image and Video Toolbox](https://github.com/pdollar/toolbox) - This free toolbox facilitates the manipulation of images and video in MATLAB. Its purpose is to complement, not replace, MATLAB's Image Processing Toolbox.
* [VLFeat](http://www.vlfeat.org/) - The VLFeat free and open source library implements popular computer vision algorithms specializing in image understanding and local features extraction and matching. It is written in C for efficiency and compatibility, with interfaces in MATLAB for ease of use, and detailed documentation throughout.
* [MexOpenCV](https://github.com/kyamagu/mexopencv) - MATLAB MEX interface for [OpenCV](http://opencv.org), i.e. one of the leading libraries for computer vision.
* [Zoning Aggregated Hypercolumns for Keyword Spotting](https://github.com/sfikas/zah) - An image descriptor, suitable for keyword spotting, that is computed as a function of Convolutional Neural Network intermediate layer responses.

## Model Reduction

* [drtoolbox](https://lvdmaaten.github.io/drtoolbox/) - Matlab Toolbox for Dimensionality Reduction.
* [DMD Book](http://dmdbook.com/CODE.zip) - Dynamic Mode Decomposition Book Companion Code.
* [emgr](http://gramian.de) - EMpirical GRamian framework for model reduction of input-output systems.
* [hapod](http://git.io/hapod) - Hierarchical Approximate Proper Orthogonal Decomposition.
* [MOR Toolbox](https://mordigitalsystems.fr/en/) - Model Reduction Toolbox for MATLAB (formerly: [MORE](http://w3.onera.fr/more/) - a MOdel REduction Toolbox).
* [KerMor](http://www.ians.uni-stuttgart.de/MoRePaS/software/kermor/) - Model order reduction for nonlinear dynamical systems and nonlinear approximation.
* [morgen](https://git.io/morgen) - Model Order Reduction for Gas and Energy Networks.
* [MORLAB](http://www.mpi-magdeburg.mpg.de/1657682/morlab) - Model Order Reduction Laboratory.
* [MORPACK](http://tu-dresden.de/die_tu_dresden/fakultaeten/fakultaet_maschinenwesen/ifkm/dmt/forschung/forschungsthemen/morpack) - Model Order Reduction PACKage.
* [MESS](http://www.mpi-magdeburg.mpg.de/projects/mess) - The Matrix Equations Sparse Solvers library, is the successor to the Lyapack Toolbox.
* [MRedTool](https://web.archive.org/web/20080727002739/http://scowl.ge.uiuc.edu/~ssivakum/research.html) - A MATLAB toolbox for model reduction of multi-dimensional systems.
* [Nonlinear Model Reduction Routines for MATLAB](http://homepages.rpi.edu/~hahnj/Model_Reduction) - Empirical balanced truncation toolbox.
* [psssMOR](https://www.mathworks.com/matlabcentral/fileexchange/64392-psssmor-toolbox) - A parametric sparse state-space and Model Order Reduction toolbox.
* [RBmatlab](https://www.morepas.org/software/rbmatlab/) - A MATLAB library for model order reduction with Reduced Basis Methods.
* [redBKIT](https://github.com/redbKIT/redbKIT) - A MATLAB library for reduced-order modeling of parametrized PDEs.
* [SiMpLIfy](http://simplifytoolbox.tumblr.com/) - Structured ModeL reduction.
* [SLICOT](http://slicot.org/matlab-toolboxes/model-reduction) - SLICOT Model and Controller Reduction Toolbox.
* [SMORES](https://web.archive.org/web/20151115030532/http://bnbond.com/software/smores/) - A Matlab tool for Simulation and Model Order Reduction of Electrical Systems.
* [SOMDDPA](http://doi.org/10.5281/zenodo.3332706) - Second-Order Modally-Damped Dominant Pole Algorithm.
* [sssMOR](https://github.com/MORLab/sssMOR) - sparse state space and Model Order Reduction toolbox.
* [SUMO](http://sumo.intec.ugent.be/SUMO) - SUrrogate MOdelling lab.


## Interfacing with other languages

* [C/C++ mex routines](http://uk.mathworks.com/help/matlab/write-cc-mex-files.html) - C/C++ MEX files allow to call C/C++ functions from within MATLAB.
* [Fortran mex routines](http://uk.mathworks.com/help/matlab/write-fortran-mex-files.html) - Fortran MEX routines allow you to call Fortran code from within MATLAB.
* [MATLAB Engine for Python](http://uk.mathworks.com/help/matlab/matlab_external/get-started-with-matlab-engine-for-python.html) - The MATLAB Engine for Python provides a Python package named `matlab` that enables you to call MATLAB functions from within Python.
* [matlab kernel](https://github.com/calysto/matlab_kernel) - To run MATLAB code inside IPython / Jupyter notebooks.
* [MATLink](http://matlink.org/) - To run MATLAB code inside Mathematica / Wolfram Language notebooks.
* [node-matlab](https://github.com/zeybek/node-matlab) - To run MATLAB code inside NodeJS.
* [octave kernel](https://github.com/calysto/octave_kernel) - To run Octave code inside IPython / Jupyter notebooks.
* [Python](http://uk.mathworks.com/help/matlab/call-python-libraries.html) - How to call Python functions from within MATLAB.


## Interfacing with other programs

* [MATLAB QuickLook](https://github.com/jaketmp/matlab-quicklook) - QuickLook preview generator for MAT files. This shows the contents of your MAT files in Finder. The binary is only compatible with 64 bit OS X.
* [MATLAB-git](https://github.com/manur/MATLAB-git) - A thin wrapper to call `git` from within a MATLAB console.
* [JSONlab](https://github.com/fangq/jsonlab) - Toolbox to encode/decode [JSON](http://www.json.org) data files from within MATLAB and Octave.


## Learning MATLAB

* [Software Carpentry lessons in MATLAB](http://swcarpentry.github.io/matlab-novice-inflammation/) - Teaching basic lab skills for research computing.
* [YAGTOM: Yet Another Guide TO MATLAB](http://ubcmatlabguide.github.io) - This MATLAB® tutorial starts from the basics and builds up to advanced concepts such as object-oriented programming (Note the [Speedup Tricks](https://ubcmatlabguide.github.io/html/speedup.html)).
* [MATLAB Academy - MATLAB Onramp](https://matlabacademy.mathworks.com/) - Brief MATLAB introduction including language syntax and common workflows. Free for all. 
* [Control Tutorials for MATLAB and Simulink](http://ctms.engin.umich.edu/CTMS/index.php?aux=Home) - This site contains quite a bit control theory, some practical applications and how to implement these in MATLAB and SimuLink.
* [Rosetta Code (MATLAB category)](http://rosettacode.org/wiki/Category:MATLAB) - Rosetta Code is a community comparing algorithms in different languages.

## Making Figures

*Third-party tools to produce publication quality figures.*

* [antijet](https://git.io/antijet) - An alternative to the problematic "jet"-colormap.
* [export_fig](https://github.com/altmany/export_fig) - produces better vector/bitmap graphics than standalone MATLAB®.
* [gramm](https://uk.mathworks.com/matlabcentral/fileexchange/54465-gramm-complete-data-visualization-toolbox-ggplot2-r-like) - GRAMmar of graphics for Matlab.
* [hq-matlab-figs](http://dgleich.github.io/hq-matlab-figs/) - Creating high-quality graphics in MATLAB for papers and presentations.
* [matlab2tikz](https://github.com/matlab2tikz/matlab2tikz) - exports MATLAB® figures to TikZ code for seamless inclusion in LaTeX documents.
* [matplotlib colormaps](https://de.mathworks.com/matlabcentral/fileexchange/62729-matplotlib-2-0-colormaps--perceptually-uniform-and-beautiful) - Perceptually uniform colormaps.
* [plot2svg](http://www.mathworks.com/matlabcentral/fileexchange/7401-scalable-vector-graphics--svg--export-of-figures) - exports MATLAB® figures to Scalable Vector Graphics format. This is particularly useful in older MATLAB® versions that don't support `print -dsvg`.
* [Plotly MATLAB Library](https://plot.ly/matlab/) - exports MATLAB® figures to the online plotting service [plot.ly](https://plot.ly).
* [saveFigure](https://github.com/djoshea/matlab-save-figure) - exports MATLAB® figures to PDF, SVG, EPS and PNG with improved support for transparancy.
* [wgPlot](https://mathworks.com/matlabcentral/fileexchange/24035-wgplot-weighted-graph-plot--a-better-version-of-gplot) - A better version of gplot.
* [xkcdify](https://www.mathworks.com/matlabcentral/fileexchange/38499-xkcdify) - xkcd-style plots.


## MATLAB-like environments

* [GNU Octave](https://www.gnu.org/software/octave/) - GNU Octave is a high-level interpreted language, primarily intended for numerical computations. It can run many MATLAB programs unmodified.
* [Scilab](http://www.scilab.org/) - Scilab is free and open source software for numerical computation providing a powerful computing environment for engineering and scientific applications.
* [MathScript](https://www.ni.com/en-gb/support/downloads/software-products/download.labview-mathscript-module.html#345625) - MathScript is an interpreter for MATLAB® code for the [LabView](http://www.ni.com/labview/) programming language.

## Miscellaneous Free Toolboxes
*High quality free toolboxes in subject areas that don't yet have their own section*

* [Chebfun](http://www.chebfun.org/) - Chebfun is an open-source package for computing with functions to about 15-digit accuracy.
* [IFISS](http://www.maths.manchester.ac.uk/~djs/ifiss/) - IFISS is a graphical package for the interactive numerical study of incompressible flow problems which can be run under MATLAB or Octave.
* [Wavelab](http://statweb.stanford.edu/~wavelab/Wavelab_850/index_wavelab850.html) - WaveLab is a collection of MATLAB functions related to wavelet analysis.
* [MPITB](http://www.ugr.es/~jfernand/mpitb_eng.html) - MPI Toolbox for Matlab ([MPI Toolbox for Octave](http://www.ugr.es/~jfernand/mpitb.html)).
* [Lightspeed](http://research.microsoft.com/en-us/um/people/minka/software/lightspeed/) - Microsoft Lightspeed Utilities Toolbox.
* [bct](http://www.brain-connectivity-toolbox.net/) - Brain Connectivity Toolbox.
* [OpenCL Toolbox](https://github.com/imaginairy-user/opencl-toolbox/) - OpenCL support for MATLAB.
* [UQLab](http://www.uqlab.com/) - The Framework for Uncertainty Quantification.
* [Octave Forge](http://octave.sourceforge.net/) - Extra packages for GNU Octave.
* [Matrix Computation Toolbox](http://www.maths.manchester.ac.uk/~higham/mctoolbox/) - For constructing test matrices, computing matrix factorizations, visualizing matrices, and carrying out direct search optimization.
* [GRANSO](http://timmitchell.com/software/GRANSO/index.html) - GRadient-based Algorithm for Non-Smooth Optimization.
* [ROSTAPACK](http://www.timmitchell.com/software/ROSTAPACK/index.html) - RObust STAbility PACKage.

## Optimization 

* [Manopt](https://www.manopt.org/) Free toolboxes for optimization on manifolds and matrices.

## Statistics

* [FSDA Toolbox](http://rosa.unipr.it/fsda.html) - FSDA (Flexible Statistics and Data Analysis) extends MATLAB and the Statistics Toolbox for the robust analysis of data sets affected by different sources of heterogeneity.

# Resources

Where to discover new MATLAB resources.

## Websites

* [MATLAB File Exchange](http://uk.mathworks.com/matlabcentral/fileexchange/) - File Exchange lets you find and share custom applications, classes, code examples, drivers, functions, Simulink models, scripts, and videos.
* [Cody](http://uk.mathworks.com/matlabcentral/cody/) - A website with programming challenges that consist of writing MATLAB® code. A fun way to improve your skills.
* [ThingSpeak](https://thingspeak.com) - An internet of things (IoT) platform that allows to collect, analyze and act upon various data sources. You can enter your own MATLAB® code to process and plot your data.
* [Octave-Online](http://octave-online.net/) - An online Octave interpreter.
* [Matlab FAQ on Wikia](http://matlab.wikia.com/wiki/FAQ)
* [Programming Community Curated Resources For Learning Matlab](https://hackr.io/tutorials/learn-matlab)
* [Assorted .m-files](http://people.duke.edu/~hpgavin/m-files/) - by H.P. Gavin.

## Blogs

* [Cleve's Corner: Cleve Moler on Mathematics and Computing](http://blogs.mathworks.com/cleve/) - Cleve Moler is the author of the first MATLAB, one of the founders of MathWorks, and is currently Chief Mathematician at the company.
* [Developer Zone](http://blogs.mathworks.com/developer/) - Developing, testing, and integrating production grade software using MATLAB.
* [Guy and Seth on Simulink](http://blogs.mathworks.com/seth/) - Guy Rouleau and Seth Popinchalk are Application Engineers for MathWorks.
* [Loren on the art of MATLAB](http://blogs.mathworks.com/loren/) - Loren Shure works on design of the MATLAB language at MathWorks.
* [Steve on Image Processing](http://blogs.mathworks.com/steve/) - Steve Eddins has developed MATLAB and image processing capabilities for MathWorks since 1993.
* [Undocumented MATLAB](http://undocumentedmatlab.com) - Yair Altman blogs about the hidden underbelly of MATLAB®. This is the place to be for discovering new and awesome features.
* [WalkingRandomly](http://www.walkingrandomly.com/?cat=11) - The MATLAB tag of WalkingRandomly.
* [xcorr: comp neuro](http://xcorr.net/?s=matlab) - MATLAB relevant post of XCORR.
* [Matlab Geeks](http://matlabgeeks.com/) - Matlab Blog, Tutorials and Expertise.

## Books

* [Accelerating MATLAB Performance: 1001 tips to speed up MATLAB programs](https://www.crcpress.com/Accelerating-MATLAB-Performance-1001-tips-to-speed-up-MATLAB-programs/Altman/9781482211290) - A superb guide to making MATLAB code faster.
* [Data-Driven Science and Engineering: Machine Learning, Dynamical Systems and Control](http://www.databookuw.com/) - This textbook brings together machine learning, engineering mathematics, and mathematical physics to integrate modeling and control of dynamical systems with modern methods in data science.
* [The Elements of MATLAB Style](http://www.cambridge.org/us/academic/subjects/computer-science/scientific-computing-scientific-software/elements-matlab-style) - Coding guidelines for the MATLAB language.
* [MATLAB for Dummies](http://eu.wiley.com/WileyCDA/WileyTitle/productCd-111882010X.html) - A good beginners book.
* [MATLAB Guide](http://www.ma.man.ac.uk/~higham/mg/) - By Desmond and Nicholas Higham. One of the best books for learning MATLAB
* [Undocumented Secrets of MATLAB-Java Programming](https://www.crcpress.com/Undocumented-Secrets-of-MATLAB-Java-Programming/Altman/9781439869031#isbn) - A great guide on MATLAB® and its Java interface (e.g. for GUIs or interaction with JVM software).
* [An Introduction to MATLAB for Behavioral Researchers](http://www.sagepub.com/books/Book239284) - Beginner book for those with no programming experience. Targeted to those in psychology/behavioural sciences and uses real experimental data in examples.

## Reference Cards

* [MATLAB Quick Reference](http://www.robots.ox.ac.uk/~dwm/Courses/1P5_2011/MatlabQuickRef1v1.pdf) - by Eric Peasley, Department of Engineering Science, University of Oxford

## Social Media

* [MATLAB on Facebook](https://www.facebook.com/MATLAB) - Official Facebook page for MATLAB.
* [MATLAB Reddit](https://www.reddit.com/r/matlab/) - MATLAB on Reddit.
* [MATLAB on Stack Overflow](http://stackoverflow.com/questions/tagged/matlab) - Stack Overflow is a community of 4.7 million programmers, just like you, helping each other.
* [MATLAB on Twitter](https://twitter.com/MATLAB) - Official MATLAB twitter account.
* [Octave on Stack Overflow](http://stackoverflow.com/questions/tagged/octave) - Stack Overflow has an extensive back catalogue of many answered questions.
* [Octave Reddit](https://www.reddit.com/r/octave/) - Octave on Reddit.

## MOOCs
*Massive open online courses.*

* [Linear Algebra: Foundations to Frontiers](http://www.ulaff.net/index.html) - Hands-on introduction to Linear Algebra using MATLAB.

## Tips and Tricks

* [Advanced Programming Techniques in MATLAB](https://www.mathworks.com/content/dam/mathworks/mathworks-dot-com/campaigns/portals/files/intel/may-12-2015-advanced-matlab.pdf) - Slides by Loren Shure.
* [Guidelines for writing clean and fast code in MATLAB](http://www.mathworks.com/matlabcentral/fileexchange/22943-guidelines-for-writing-clean-and-fast-code-in-matlab) - A guide with best practices in MATLAB® programming to which anybody can [contribute](https://github.com/nschloe/matlab-guidelines).
* [Octave and MATLAB Snippets](https://git.io/mtips) - Collection of code snippets.
* [knkutils](https://github.com/kendrickkay/knkutils) - MATLAB utility functions written by Kendrick Kay.
* [Lanczos Algorithm for SVD](http://bickson.blogspot.de/2011/10/lanczos-algorithm-for-svd-singule-value.html) - MATLAB Code
* [Jie Chen's Software](https://jie-chen-ibm.appspot.com/software.html) - Collection of companion codes (mostly MATLAB).
* [SSP RK](http://sspsite.org/matlab_scripts.html) - Strong Stability Preserving Runge-Kutta Codes.
* [BV78](http://faculty.smu.edu/shampine/current.html) - Shampine's Adaptive Block Vectorized Runge-Kutta 7-8.
* [MATLAB Style Guidelines 2.0](http://www.datatool.com/downloads/MatlabStyle2%20book.pdf) - by R. Johnson.
* [parrun.sh](https://gist.github.com/precisesimulation/94395a41e53abf01da4d073b3b746493) - MATLAB and OCTAVE Parallel Job Script.
* [flamegraph](https://git.io/flamegraph) - Flame graph visualization for Octave's profiler output.
* [mlintall](https://www.mathworks.com/matlabcentral/fileexchange/23786-recursive-mlint) - Recursive `mlint`


# Contributing
Your contributions are always welcome.  Refer to the [contribution guidelines](https://github.com/mikecroucher/awesome-MATLAB/blob/main/Contributing.md) if you'd like to make a Pull Request.

This work is licensed under the Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License - [CC BY-NC-SA 4.0](http://creativecommons.org/licenses/by-nc-sa/4.0/legalcode)
