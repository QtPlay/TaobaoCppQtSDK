#ifndef HOTELORDERREFUNDFEEDBACKRESPONSE_H
#define HOTELORDERREFUNDFEEDBACKRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 退订处理结果回传
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelOrderRefundFeedbackResponse : public TaoResponse
{
public:
 virtual ~HotelOrderRefundFeedbackResponse() { }

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
