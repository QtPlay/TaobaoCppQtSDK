#ifndef HOTELMATCHFEEDBACKREQUEST_H
#define HOTELMATCHFEEDBACKREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/HotelMatchFeedbackResponse.h>

/**
 * TOP API: 用于回传hotel匹配结果
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelMatchFeedbackRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getHaid() const
;  void setHaid (qlonglong haid);

 qlonglong getHid() const
;  void setHid (qlonglong hid);

 qlonglong getMatchResult() const
;  void setMatchResult (qlonglong matchResult);


  virtual HotelMatchFeedbackResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 需进行匹配的酒店id
 **/
  qlonglong haid;

/**
 * @brief 匹配命中的酒店id
 **/
  qlonglong hid;

/**
 * @brief 匹配结果 0:未匹配，1:匹配
 **/
  qlonglong matchResult;

};

#endif  /* HOTELMATCHFEEDBACKREQUEST_H */
