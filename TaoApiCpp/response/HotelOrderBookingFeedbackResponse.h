#ifndef HOTELORDERBOOKINGFEEDBACKRESPONSE_H
#define HOTELORDERBOOKINGFEEDBACKRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 下单结果回传
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelOrderBookingFeedbackResponse : public TaoResponse
{
public:
 virtual ~HotelOrderBookingFeedbackResponse() { }

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
