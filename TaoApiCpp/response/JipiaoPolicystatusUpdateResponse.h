#ifndef JIPIAOPOLICYSTATUSUPDATERESPONSE_H
#define JIPIAOPOLICYSTATUSUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 根据外部产品id，进行政策状态更新，挂起/解挂/删除
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class JipiaoPolicystatusUpdateResponse : public TaoResponse
{
public:
 virtual ~JipiaoPolicystatusUpdateResponse() { }

  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 机票政策状态更新结果，true，成功；false，失败
 **/
  bool isSuccess;

};

#endif
