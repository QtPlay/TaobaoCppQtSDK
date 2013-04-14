#ifndef CAIPIAOSIGNSTATUSCHECKRESPONSE_H
#define CAIPIAOSIGNSTATUSCHECKRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 检查用户是否签署了支付宝代扣协议。如果签署了，返回true; 如果没签署，返回false, 同时返回签署代扣协议的Url。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CaipiaoSignstatusCheckResponse : public TaoResponse
{
public:
 virtual ~CaipiaoSignstatusCheckResponse() { }

  bool getSign() const;
  void setSign (bool sign);  QString getSignUrl() const;
  void setSignUrl (QString signUrl);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 是否签署了支付宝代扣协议
 **/
  bool sign;

/**
 * @brief 签署支付宝代扣协议的Url
 **/
  QString signUrl;

};

#endif
