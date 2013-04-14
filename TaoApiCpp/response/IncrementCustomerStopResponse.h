#ifndef INCREMENTCUSTOMERSTOPRESPONSE_H
#define INCREMENTCUSTOMERSTOPRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 供应用关闭其用户的增量消息服务功能，这样可以节省ISV的流量。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class IncrementCustomerStopResponse : public TaoResponse
{
public:
 virtual ~IncrementCustomerStopResponse() { }

  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 关闭增量消息或数据同步是否成功
 **/
  bool isSuccess;

};

#endif
