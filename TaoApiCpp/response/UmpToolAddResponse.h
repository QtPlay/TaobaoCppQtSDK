#ifndef UMPTOOLADDRESPONSE_H
#define UMPTOOLADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 新增优惠工具。通过ump sdk来完成将积木块拼装成为工具的操作，再使用本接口上传优惠工具。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpToolAddResponse : public TaoResponse
{
public:
 virtual ~UmpToolAddResponse() { }

  qlonglong getToolId() const;
  void setToolId (qlonglong toolId);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 工具id
 **/
  qlonglong toolId;

};

#endif
