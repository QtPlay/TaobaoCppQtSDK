#ifndef MARKETINGPROMOTIONKFCRESPONSE_H
#define MARKETINGPROMOTIONKFCRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 活动名称与描述违禁词检查
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class MarketingPromotionKfcResponse : public TaoResponse
{
public:
 virtual ~MarketingPromotionKfcResponse() { }

  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 是否成功
 **/
  bool isSuccess;

};

#endif
