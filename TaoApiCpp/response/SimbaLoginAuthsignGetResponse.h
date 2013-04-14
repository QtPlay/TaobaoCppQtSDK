#ifndef SIMBALOGINAUTHSIGNGETRESPONSE_H
#define SIMBALOGINAUTHSIGNGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 获取登陆权限签名
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaLoginAuthsignGetResponse : public TaoResponse
{
public:
 virtual ~SimbaLoginAuthsignGetResponse() { }

  QString getSubwayToken() const;
  void setSubwayToken (QString subwayToken);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 登陆签名
 **/
  QString subwayToken;

};

#endif
