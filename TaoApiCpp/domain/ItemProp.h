#ifndef ITEMPROP_H
#define ITEMPROP_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/PropValue.h>


/**
 * @brief 商品属性
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemProp : public TaoDomain
{

public:
 virtual ~ItemProp() { }

  QString getChildTemplate() const;
  void setChildTemplate (QString childTemplate);
  qlonglong getCid() const;
  void setCid (qlonglong cid);
  bool getIsAllowAlias() const;
  void setIsAllowAlias (bool isAllowAlias);
  bool getIsColorProp() const;
  void setIsColorProp (bool isColorProp);
  bool getIsEnumProp() const;
  void setIsEnumProp (bool isEnumProp);
  bool getIsInputProp() const;
  void setIsInputProp (bool isInputProp);
  bool getIsItemProp() const;
  void setIsItemProp (bool isItemProp);
  bool getIsKeyProp() const;
  void setIsKeyProp (bool isKeyProp);
  bool getIsSaleProp() const;
  void setIsSaleProp (bool isSaleProp);
  QDateTime getModifiedTime() const;
  void setModifiedTime (QDateTime modifiedTime);
  QString getModifiedType() const;
  void setModifiedType (QString modifiedType);
  bool getMulti() const;
  void setMulti (bool multi);
  bool getMust() const;
  void setMust (bool must);
  QString getName() const;
  void setName (QString name);
  qlonglong getParentPid() const;
  void setParentPid (qlonglong parentPid);
  qlonglong getParentVid() const;
  void setParentVid (qlonglong parentVid);
  qlonglong getPid() const;
  void setPid (qlonglong pid);
  QList<PropValue> getPropValues() const;
  void setPropValues (QList<PropValue> propValues);
  bool getRequired() const;
  void setRequired (bool required);
  qlonglong getSortOrder() const;
  void setSortOrder (qlonglong sortOrder);
  QString getStatus() const;
  void setStatus (QString status);
  QString getType() const;
  void setType (QString type);
  
  virtual void parseResponse();

private:
/**
 * @brief 子属性的模板（卖家自行输入属性时需要用到）
 **/
  QString childTemplate;

/**
 * @brief 类目ID
 **/
  qlonglong cid;

/**
 * @brief 是否允许别名。可选值：true（是），false（否）
 **/
  bool isAllowAlias;

/**
 * @brief 是否颜色属性。可选值:true(是),false(否)
 **/
  bool isColorProp;

/**
 * @brief 是否是可枚举属性。可选值:true(是),false(否)
 **/
  bool isEnumProp;

/**
 * @brief 在is_enum_prop是true的前提下，是否是卖家可以自行输入的属性（注：如果is_enum_prop返回false，该参数统一返回false）。可选值:true(是),false(否)。<b>对于品牌和型号属性（包括子属性）：如果用户是C卖家，则可自定义属性；如果是B卖家，则不可自定义属性，而必须要授权的属性。</b>
 **/
  bool isInputProp;

/**
 * @brief 是否商品属性。可选值:true(是),false(否)
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
 * @brief 属性修改时间（增量类目专用）
 **/
  QDateTime modifiedTime;

/**
 * @brief 三种枚举类型：modify，add，delete（增量类目专用）
 **/
  QString modifiedType;

/**
 * @brief 发布产品或商品时是否可以多选。可选值:true(是),false(否)
 **/
  bool multi;

/**
 * @brief 发布产品或商品时是否为必选属性。可选值:true(是),false(否)
 **/
  bool must;

/**
 * @brief 属性名
 **/
  QString name;

/**
 * @brief 上级属性ID
 **/
  qlonglong parentPid;

/**
 * @brief 上级属性值ID
 **/
  qlonglong parentVid;

/**
 * @brief 属性 ID 例：品牌的PID=20000
 **/
  qlonglong pid;

/**
 * @brief 
 **/
  QList<PropValue> propValues;

/**
 * @brief 发布产品或商品时是否为必选属性(与must相同)。可选值:true(是),false(否)
 **/
  bool required;

/**
 * @brief 排列序号。取值范围:大于零的整排列序号。取值范围:大于零的整数
 **/
  qlonglong sortOrder;

/**
 * @brief 状态。可选值:normal(正常),deleted(删除)
 **/
  QString status;

/**
 * @brief 属性值类型。可选值： 
multiCheck(枚举多选) 
optional(枚举单选) 
multiCheckText(枚举可输入多选) 
optionalText(枚举可输入单选) 
text(非枚举可输入)
 **/
  QString type;

};

#endif  /* ITEMPROP_H */
