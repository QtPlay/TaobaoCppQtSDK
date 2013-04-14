#ifndef UMPDETAILUPDATERESPONSE_H
#define UMPDETAILUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 更新活动详情
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpDetailUpdateResponse : public TaoResponse
{
public:
 virtual ~UmpDetailUpdateResponse() { }

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
