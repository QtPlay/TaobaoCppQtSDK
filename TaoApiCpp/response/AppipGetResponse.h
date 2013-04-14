#ifndef APPIPGETRESPONSE_H
#define APPIPGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 获取ISV发起请求服务器IP
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class AppipGetResponse : public TaoResponse
{
public:
 virtual ~AppipGetResponse() { }

  QString getIp() const;
  void setIp (QString ip);
  virtual void parseNormalResponse();

 private:
/**
 * @brief ISV发起请求服务器IP
 **/
  QString ip;

};

#endif
