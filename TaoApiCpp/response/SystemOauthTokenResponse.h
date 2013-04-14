#ifndef SYSTEMOAUTHTOKENRESPONSE_H
#define SYSTEMOAUTHTOKENRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: OAuth2.0 授权的第二步，换取访问令牌。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SystemOauthTokenResponse : public TaoResponse
{
public:
 virtual ~SystemOauthTokenResponse() { }

  QString getAccessToken() const;
  void setAccessToken (QString accessToken);  QString getAlipayUserId() const;
  void setAlipayUserId (QString alipayUserId);  QString getExpiresIn() const;
  void setExpiresIn (QString expiresIn);  QString getReExpiresIn() const;
  void setReExpiresIn (QString reExpiresIn);  QString getRefreshToken() const;
  void setRefreshToken (QString refreshToken);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 访问令牌
 **/
  QString accessToken;

/**
 * @brief 支付宝用户的id。
 **/
  QString alipayUserId;

/**
 * @brief 访问令牌的有效时间，单位是秒。
 **/
  QString expiresIn;

/**
 * @brief 刷新令牌的有效时间，单位是秒。
 **/
  QString reExpiresIn;

/**
 * @brief 刷新令牌
 **/
  QString refreshToken;

};

#endif
