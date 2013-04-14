#ifndef PICTUREUPDATEREQUEST_H
#define PICTUREUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/PictureUpdateResponse.h>

/**
 * TOP API: 修改指定图片的图片名
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PictureUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getNewName() const
;  void setNewName (QString newName);

 qlonglong getPictureId() const
;  void setPictureId (qlonglong pictureId);


  virtual PictureUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 新的图片名，最大长度50字符，不能为空
 **/
  QString newName;

/**
 * @brief 要更改名字的图片的id
 **/
  qlonglong pictureId;

};

#endif  /* PICTUREUPDATEREQUEST_H */
