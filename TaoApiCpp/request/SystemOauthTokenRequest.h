#ifndef SYSTEMOAUTHTOKENREQUEST_H
#define SYSTEMOAUTHTOKENREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SystemOauthTokenResponse.h>

/**
 * TOP API: OAuth2.0 授权的第二步，换取访问令牌。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SystemOauthTokenRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getCode() const
;  void setCode (QString code);

 QString getGrantType() const
;  void setGrantType (QString grantType);

 QString getRefreshToken() const
;  void setRefreshToken (QString refreshToken);


  virtual SystemOauthTokenResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 授权码，用户对应用授权后得到。
 **/
  QString code;

/**
 * @brief 获取访问令牌的类型，authorization_code表示用授权码换，refresh_token表示用刷新令牌来换。
 **/
  QString grantType;

/**
 * @brief 刷新令牌，上次换取访问令牌是得到。
 **/
  QString refreshToken;

};

#endif  /* SYSTEMOAUTHTOKENREQUEST_H */
