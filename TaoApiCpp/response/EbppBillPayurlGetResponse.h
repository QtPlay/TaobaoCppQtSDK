#ifndef EBPPBILLPAYURLGETRESPONSE_H
#define EBPPBILLPAYURLGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 创建账单之后，调用此API返回一个用户自己去收银台付款的URL，用户去收银台页面完成付款操作。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class EbppBillPayurlGetResponse : public TaoResponse
{
public:
 virtual ~EbppBillPayurlGetResponse() { }

  QString getPayUrl() const;
  void setPayUrl (QString payUrl);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 付款页面地址
 **/
  QString payUrl;

};

#endif
