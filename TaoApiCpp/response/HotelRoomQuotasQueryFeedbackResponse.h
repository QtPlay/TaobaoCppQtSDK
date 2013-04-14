#ifndef HOTELROOMQUOTASQUERYFEEDBACKRESPONSE_H
#define HOTELROOMQUOTASQUERYFEEDBACKRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 接入方房态查询结果返回
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelRoomQuotasQueryFeedbackResponse : public TaoResponse
{
public:
 virtual ~HotelRoomQuotasQueryFeedbackResponse() { }

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
