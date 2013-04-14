#ifndef RODUCTSPECPICUPLOADRESPONSE_H
#define RODUCTSPECPICUPLOADRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 上传指定类型的产品规格认证文件，并返回存有上传成功图片url的产品规格对象
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RoductSpecPicUploadResponse : public TaoResponse
{
public:
 virtual ~RoductSpecPicUploadResponse() { }

  QString getSpecPicUrl() const;
  void setSpecPicUrl (QString specPicUrl);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 上传成功的产品规格认证图片url
 **/
  QString specPicUrl;

};

#endif
