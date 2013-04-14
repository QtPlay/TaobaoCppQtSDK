#ifndef PICTUREUSERINFOGETRESPONSE_H
#define PICTUREUSERINFOGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/UserInfo.h>


/**
 * @brief TOP RESPONSE API: 查询用户的图片空间使用信息，包括：订购量，已使用容量，免费容量，总的可使用容量，订购有效期，剩余容量
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PictureUserinfoGetResponse : public TaoResponse
{
public:
 virtual ~PictureUserinfoGetResponse() { }

  UserInfo getUserInfo() const;
  void setUserInfo (UserInfo userInfo);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 用户使用图片空间的信息
 **/
  UserInfo userInfo;

};

#endif
