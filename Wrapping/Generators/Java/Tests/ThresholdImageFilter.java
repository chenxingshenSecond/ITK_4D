/*=========================================================================
 *
 *  Copyright Insight Software Consortium
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/

/**
 *  Example on the use of the ThresholdImageFilter
 *
 */

import org.itk.itkioimagebase.*;
import org.itk.itkthresholding.*;

public class ThresholdImageFilter
{
  public static void main( String argv[] )
  {
    System.out.println("ThresholdImageFilter Example");

    itkImageFileReaderIUC2 reader = new itkImageFileReaderIUC2();
    itkImageFileWriterIUC2 writer = new itkImageFileWriterIUC2();

    itkThresholdImageFilterIUC2 filter = new itkThresholdImageFilterIUC2();

    filter.SetInput( reader.GetOutput() );
    writer.SetInput( filter.GetOutput() );

    reader.SetFileName( argv[0] );
    writer.SetFileName( argv[1] );

    filter.SetOutsideValue( Short.parseShort( argv[2] )  );
    filter.ThresholdAbove(  Short.parseShort( argv[3] )  );

    writer.Update();
  }

}
