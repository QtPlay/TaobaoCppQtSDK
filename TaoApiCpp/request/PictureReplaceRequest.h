#ifndef PICTUREREPLACEREQUEST_H
#define PICTUREREPLACEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/PictureReplaceResponse.h>

/**
 * TOP API: 替换一张图片，只替换图片数据，图片名称，图片分类等保持不变。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PictureReplaceRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 FileItem getImageData() const
;  void setImageData (FileItem imageData);

 qlonglong getPictureId() const
;  void setPictureId (qlonglong pictureId);


  virtual PictureReplaceResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 图片二进制文件流,不能为空,允许png、jpg、gif图片格式
 **/
  FileItem imageData;

/**
 * @brief 要替换的图片的id，必须大于0
 **/
  qlonglong pictureId;

};

#endif  /* PICTUREREPLACEREQUEST_H */
