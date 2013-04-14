#ifndef HOTELMATCHFEEDBACKRESPONSE_H
#define HOTELMATCHFEEDBACKRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 用于回传hotel匹配结果
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelMatchFeedbackResponse : public TaoResponse
{
public:
 virtual ~HotelMatchFeedbackResponse() { }

  bool getSucc() const;
  void setSucc (bool succ);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 结果回传是否成功
 **/
  bool succ;

};

#endif
