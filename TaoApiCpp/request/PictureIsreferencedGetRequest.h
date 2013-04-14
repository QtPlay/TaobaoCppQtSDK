#ifndef PICTUREISREFERENCEDGETREQUEST_H
#define PICTUREISREFERENCEDGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/PictureIsreferencedGetResponse.h>

/**
 * TOP API: 查询图片是否被引用，被引用返回true，未被引用返回false
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PictureIsreferencedGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getPictureId() const
;  void setPictureId (qlonglong pictureId);


  virtual PictureIsreferencedGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 图片id
 **/
  qlonglong pictureId;

};

#endif  /* PICTUREISREFERENCEDGETREQUEST_H */
