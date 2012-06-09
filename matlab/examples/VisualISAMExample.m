%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% GTSAM Copyright 2010, Georgia Tech Research Corporation,
% Atlanta, Georgia 30332-0415
% All Rights Reserved
% Authors: Frank Dellaert, et al. (see THANKS for the full author list)
%
% See LICENSE for the license information
%
% @brief A simple visual SLAM example for structure from motion
% @author Duy-Nguyen Ta
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

clear
%% Global variables used in VisualISAMExample
VisualISAMGlobalVars

%% Setting data options
TRIANGLE = true;
NCAMERAS = 20;
SHOW_IMAGES = false;

%% iSAM Options
HARD_CONSTRAINT = false;
POINT_PRIORS = false;
BATCH_INIT = true;
REORDER_INTERVAL = 10;
ALWAYS_RELINEARIZE = false;

%% Display Options
SAVE_GRAPH = false;
PRINT_STATS = true;
DRAW_INTERVAL = 4;
CAMERA_INTERVAL = 1;
DRAW_TRUE_POSES = false;
SAVE_FIGURES = false;
SAVE_GRAPHS = false;

%% Generate data and initialize iSAM with the first pose and points
VisualISAMGenerateData
VisualISAMInitialize
figure;
VisualISAMPlot

%% Main loop for iSAM: stepping through all poses
for frame_i=2:NCAMERAS
    VisualISAMStep
    if mod(frame_i,DRAW_INTERVAL)==0
        VisualISAMPlot
    end
end