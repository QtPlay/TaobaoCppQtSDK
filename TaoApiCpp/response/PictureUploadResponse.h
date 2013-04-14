#ifndef PICTUREUPLOADRESPONSE_H
#define PICTUREUPLOADRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Picture.h>


/**
 * @brief TOP RESPONSE API: 上传单张图片
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PictureUploadResponse : public TaoResponse
{
public:
 virtual ~PictureUploadResponse() { }

  Picture getPicture() const;
  void setPicture (Picture picture);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 当前上传的一张图片信息
 **/
  Picture picture;

};

#endif
