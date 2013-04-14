#ifndef UMPACTIVITYUPDATERESPONSE_H
#define UMPACTIVITYUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 修改营销活动
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpActivityUpdateResponse : public TaoResponse
{
public:
 virtual ~UmpActivityUpdateResponse() { }

  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 调用是否成功
 **/
  bool isSuccess;

};

#endif
