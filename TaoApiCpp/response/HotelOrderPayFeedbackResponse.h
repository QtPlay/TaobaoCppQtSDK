#ifndef HOTELORDERPAYFEEDBACKRESPONSE_H
#define HOTELORDERPAYFEEDBACKRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 支付确认结果回传
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelOrderPayFeedbackResponse : public TaoResponse
{
public:
 virtual ~HotelOrderPayFeedbackResponse() { }

  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 接口调用是否成功
 **/
  bool isSuccess;

};

#endif
