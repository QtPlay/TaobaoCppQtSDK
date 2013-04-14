#ifndef PICTUREUSERINFOGETREQUEST_H
#define PICTUREUSERINFOGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/PictureUserinfoGetResponse.h>

/**
 * TOP API: 查询用户的图片空间使用信息，包括：订购量，已使用容量，免费容量，总的可使用容量，订购有效期，剩余容量
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PictureUserinfoGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;


  virtual PictureUserinfoGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:

};

#endif  /* PICTUREUSERINFOGETREQUEST_H */
