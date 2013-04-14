#ifndef ITEMPROPSGETREQUEST_H
#define ITEMPROPSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ItempropsGetResponse.h>

/**
 * TOP API: 通过设置必要的参数，来获取商品后台标准类目属性，以及这些属性里面详细的属性值prop_values。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItempropsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getChildPath() const
;  void setChildPath (QString childPath);

 qlonglong getCid() const
;  void setCid (qlonglong cid);

 QString getFields() const
;  void setFields (QString fields);

 bool getIsColorProp() const
;  void setIsColorProp (bool isColorProp);

 bool getIsEnumProp() const
;  void setIsEnumProp (bool isEnumProp);

 bool getIsInputProp() const
;  void setIsInputProp (bool isInputProp);

 bool getIsItemProp() const
;  void setIsItemProp (bool isItemProp);

 bool getIsKeyProp() const
;  void setIsKeyProp (bool isKeyProp);

 bool getIsSaleProp() const
;  void setIsSaleProp (bool isSaleProp);

 qlonglong getParentPid() const
;  void setParentPid (qlonglong parentPid);

 qlonglong getPid() const
;  void setPid (qlonglong pid);

 qlonglong getType() const
;  void setType (qlonglong type);


  virtual ItempropsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 类目子属性路径,由该子属性上层的类目属性和类目属性值组成,格式pid:vid;pid:vid.取类目子属性需要传child_path,cid
 **/
  QString childPath;

/**
 * @brief 叶子类目ID，如果只传cid，则只返回一级属性,通过taobao.itemcats.get获得叶子类目ID
 **/
  qlonglong cid;

/**
 * @brief 需要返回的字段列表，见：ItemProp，默认返回：pid, name, must, multi, prop_values
 **/
  QString fields;

/**
 * @brief 是否颜色属性。可选值:true(是),false(否) (删除的属性不会匹配和返回这个条件)
 **/
  bool isColorProp;

/**
 * @brief 是否枚举属性。可选值:true(是),false(否) (删除的属性不会匹配和返回这个条件)。如果返回true，属性值是下拉框选择输入，如果返回false，属性值是用户自行手工输入。
 **/
  bool isEnumProp;

/**
 * @brief 在is_enum_prop是true的前提下，是否是卖家可以自行输入的属性（注：如果is_enum_prop返回false，该参数统一返回false）。可选值:true(是),false(否) (删除的属性不会匹配和返回这个条件)
 **/
  bool isInputProp;

/**
 * @brief 是否商品属性，这个属性只能放于发布商品时使用。可选值:true(是),false(否)
 **/
  bool isItemProp;

/**
 * @brief 是否关键属性。可选值:true(是),false(否)
 **/
  bool isKeyProp;

/**
 * @brief 是否销售属性。可选值:true(是),false(否)
 **/
  bool isSaleProp;

/**
 * @brief 父属性ID
 **/
  qlonglong parentPid;

/**
 * @brief 属性id (取类目属性时，传pid，不用同时传PID和parent_pid)
 **/
  qlonglong pid;

/**
 * @brief 获取类目的类型：1代表集市、2代表天猫
 **/
  qlonglong type;

};

#endif  /* ITEMPROPSGETREQUEST_H */
