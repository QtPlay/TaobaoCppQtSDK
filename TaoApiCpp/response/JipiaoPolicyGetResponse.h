#ifndef JIPIAOPOLICYGETRESPONSE_H
#define JIPIAOPOLICYGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Policy.h>


/**
 * @brief TOP RESPONSE API: 根据政策id或者政策外部id查询政策信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class JipiaoPolicyGetResponse : public TaoResponse
{
public:
 virtual ~JipiaoPolicyGetResponse() { }

  Policy getPolicy() const;
  void setPolicy (Policy policy);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 机票政策查询返回结果对象
 **/
  Policy policy;

};

#endif
