#ifndef PICTUREDELETEREQUEST_H
#define PICTUREDELETEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/PictureDeleteResponse.h>

/**
 * TOP API: 删除图片空间图片
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PictureDeleteRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getPictureIds() const
;  void setPictureIds (QString pictureIds);


  virtual PictureDeleteResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 图片ID字符串,可以一个也可以一组,用英文逗号间隔,如450,120,155
 **/
  QString pictureIds;

};

#endif  /* PICTUREDELETEREQUEST_H */
