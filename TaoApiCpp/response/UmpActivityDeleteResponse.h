#ifndef UMPACTIVITYDELETERESPONSE_H
#define UMPACTIVITYDELETERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 删除营销活动。对应的活动详情等将会被全部删除。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpActivityDeleteResponse : public TaoResponse
{
public:
 virtual ~UmpActivityDeleteResponse() { }

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
